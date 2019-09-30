function Initialize()

end

function Update()

	local AddNameVariable = SKIN:GetVariable('AddName')
	local AddPathVariable = SKIN:GetVariable('AddPath')
	local RemoveNameVariable = SKIN:GetVariable('RemoveName')
	local ButtonPressedVariable = SKIN:GetVariable('ButtonPressed')

	if ButtonPressedVariable == '0' then

		if AddNameVariable == 'Program name' and AddPathVariable == 'Program path' then

			local SuccessInputHidden = SKIN:GetVariable('SuccessInputHidden')
			if SuccessInputHidden == '0' then

				SKIN:Bang('!SetVariable', 'SuccessInputHidden', '1')

			end

			local WrongInputHidden = SKIN:GetVariable('WrongInputHidden')
			if WrongInputHidden == '1' then

				SKIN:Bang('!SetVariable', 'WrongInputHidden', '0')

			end

		else

			local WrongInputHidden = SKIN:GetVariable('WrongInputHidden')
			if WrongInputHidden == '0' then

				SKIN:Bang('!SetVariable', 'WrongInputHidden', '1')

			end

			local SuccessInputHidden = SKIN:GetVariable('SuccessInputHidden')
			if SuccessInputHidden == '1' then

				SKIN:Bang('!SetVariable', 'SuccessInputHidden', '0')

			end

			add(AddNameVariable, AddPathVariable)

		end

	elseif ButtonPressedVariable == '1' then

		if RemoveNameVariable == 'Program name' then

			local SuccessInputHidden = SKIN:GetVariable('SuccessInputHidden')
			if SuccessInputHidden == '0' then

				SKIN:Bang('!SetVariable', 'SuccessInputHidden', '1')

			end

			local WrongInputHidden = SKIN:GetVariable('WrongInputHidden')
			if WrongInputHidden == '1' then

				SKIN:Bang('!SetVariable', 'WrongInputHidden', '0')

			end

		else

			local WrongInputHidden = SKIN:GetVariable('WrongInputHidden')
			if WrongInputHidden == '0' then

				SKIN:Bang('!SetVariable', 'WrongInputHidden', '1')

			end

			local SuccessInputHidden = SKIN:GetVariable('SuccessInputHidden')
			if SuccessInputHidden == '1' then

				SKIN:Bang('!SetVariable', 'SuccessInputHidden', '0')

			end

			remove(RemoveNameVariable)
			
		end
	end

	SKIN:Bang('!SetVariable', 'ButtonPressed', '2')
	SKIN:Bang('!Refresh MiniMal\\Launcher')
	SKIN:Bang("!DisableMeasure MeasureLuaScript")

end

add = function(name, path)

	-- READ APPLICATIONNAMES.INC --
	ApplicationNames = readApplicationFile(SKIN:GetVariable("@") .. '\\ApplicationNames.inc')

	-- READ APPLICATIONPATHS.INC --
	ApplicationPaths = readApplicationFile(SKIN:GetVariable("@") .. '\\ApplicationPaths.inc')

	-- LOAD APPLICATIONNAMES.INC & APPLICATIONPATHS.INC --
	loadApplicationFiles(ApplicationNames, ApplicationPaths)

	matrix[name] = path

	writeFiles()

end

remove = function(name)

	-- READ APPLICATIONNAMES.INC --
	ApplicationNames = readApplicationFile(SKIN:GetVariable("@") .. '\\ApplicationNames.inc')

	-- READ APPLICATIONPATHS.INC --
	ApplicationPaths = readApplicationFile(SKIN:GetVariable("@") .. '\\ApplicationPaths.inc')

	-- LOAD APPLICATIONNAMES.INC & APPLICATIONPATHS.INC --
	loadApplicationFiles(ApplicationNames, ApplicationPaths)

	matrix[name] = nil

	writeFiles()

end

writeFiles = function()

	applicationNames(matrix)
	applicationPaths(matrix)
	applications(matrix)
	shapes(matrix)
	buttons(matrix)
	variables(matrix)

end

readApplicationFile = function(FilePath)

	local File = io.open(FilePath)

	if not File then
		print('ReadFile: unable to open file at ' .. FilePath)
		return
	end

	i = 1
	local Contents = {}
	for Line in File:lines() do

		if i > 2 then
			table.insert(Contents, string.sub(Line, 5))
		end

		i = i + 1
	end

	File:close()

	return Contents

end

loadApplicationFiles = function(ApplicationNames, ApplicationPaths)

	matrix = {}
	for i = 1, #ApplicationNames do

		matrix[ApplicationNames[i]] = ApplicationPaths[i]
	end

end

applicationNames = function(matrix)

	local FilePath = SKIN:GetVariable("@") .. '\\ApplicationNames.inc'
	local File = io.open(FilePath, 'w')

	if not File then
		print('ReadFile: unable to open file at ' .. FilePath)
		return
	end

	File:write('[Variables]\n\n')

	local i = 0
	for k,v in spairs(matrix) do

		File:write('N')

		if i < 10 then
			File:write('0')
		end

		File:write(tostring(i) .. '=' .. k .. '\n')

		i = i + 1
	end

	File:close()

end

applicationPaths = function(matrix)

	local FilePath = SKIN:GetVariable("@") .. '\\ApplicationPaths.inc'
	local File = io.open(FilePath, 'w')

	if not File then
		print('ReadFile: unable to open file at ' .. FilePath)
		return
	end

	File:write('[Variables]\n\n')

	local i = 0

	for k,v in spairs(matrix) do

		File:write('A')

		if i < 10 then
			File:write('0')
		end

		File:write(tostring(i) .. '=' .. v .. '\n')

		i = i + 1
	end

	File:close()

end

applications = function(matrix)

	local FilePath = SKIN:GetVariable("@") .. '\\Applications.inc'
	local File = io.open(FilePath, 'w')

	if not File then
		print('ReadFile: unable to open file at ' .. FilePath)
		return
	end

	local PART_0 = '['
	local PART_1 = ']\nMeter=String\nText=#N'
	local PART_2 = '#\nHidden=1\nX=#X'
	local PART_3 = '#+3\nY=#'
	local PART_4 = '#\nFontColor=#MainColor#\nFontSize=#FontSize#\nFontFace=#FontFace#\nLeftMouseUpAction=["#A'
	local PART_5 = '#"]\n\n'

	local i = 0
	local counter_Y = 0
	for k,v in spairs(matrix) do

		local currLetter = string.upper(string.sub(k, 1, 1))
		if i == 0 then

			lastLetter = currLetter

		else

			if lastLetter == currLetter then

				counter_Y = counter_Y + 1

			else

				lastLetter = currLetter
				counter_Y = 0

			end

		end

		local VAR_0 = string.upper(string.sub(k, 1, 1)) .. tostring(counter_Y)

		local VAR_1 = ''
		if i < 10 then

			VAR_1 = '0' .. tostring(i)

		else

			VAR_1 = tostring(i)

		end

		local VAR_2 = string.upper(string.sub(k, 1, 1))
		local VAR_3 = 'Y' .. tostring(counter_Y)

		local VAR_4 = ''
		if i < 10 then

			VAR_4 = '0' .. tostring(i)

		else

			VAR_4 = tostring(i)

		end

		i = i + 1

		File:write(PART_0 .. VAR_0 .. PART_1 .. VAR_1 .. PART_2 .. VAR_2 .. PART_3 .. VAR_3 .. PART_4 .. VAR_4 .. PART_5)
	end

	File:close()

end

shapes = function(matrix)

	local FilePath = SKIN:GetVariable("@") .. '\\Shapes.inc'
	local File = io.open(FilePath, 'w')

	if not File then
		print('ReadFile: unable to open file at ' .. FilePath)
		return
	end

	local PART_0 = '[S'
	local PART_1 = ']\nMeter=Shape\nShape=Rectangle #X'
	local PART_2 = '#,#'
	local PART_3 = '#,(['
	local PART_4 = ':W]+5),['
	local PART_5 = ':H] | StrokeWidth 0 | Fill Color 255,255,255,10\nDynamicVariables=1\n\n'

	local i = 0
	local counter_Y = 0
	for k,v in spairs(matrix) do

		local currLetter = string.upper(string.sub(k, 1, 1))
		if i == 0 then

			lastLetter = currLetter

		else

			if lastLetter == currLetter then

				counter_Y = counter_Y + 1

			else

				lastLetter = currLetter
				counter_Y = 0

			end

		end

		local VAR_0 = string.upper(string.sub(k, 1, 1)) .. tostring(counter_Y)
		local VAR_1 = string.upper(string.sub(k, 1, 1))
		local VAR_2 = 'Y' .. tostring(counter_Y)
		local VAR_3 = VAR_0
		local VAR_4 = VAR_0

		i = i + 1

		File:write(PART_0 .. VAR_0 .. PART_1 .. VAR_1 .. PART_2 .. VAR_2 .. PART_3 .. VAR_3 .. PART_4 .. VAR_4 .. PART_5)
	end
	
	File:close()

end

buttons = function(matrix)
	
	local FilePath = SKIN:GetVariable("@") .. '\\Buttons.inc'
	local File = io.open(FilePath, 'w')

	if not File then
		print('ReadFile: unable to open file at ' .. FilePath)
		return
	end

	local PART_0 = '[ExtraButton]\nMeter=Button\nButtonImage=#@#Images\\zpecial.png\nX=#XTRA#\nY=#YSTART#\nButtonCommand=[!ToggleConfig "MiniMal\\Settings" "Settings.ini"]\n'
	local PART_1 = '\n[Button'
	local PART_2 = ']\nMeter=Shape\nShape=Rectangle #X'
	local PART_3 = '#,(#YSTART#),50,50 | StrokeWidth 0 | Fill Color #MainColor#\nLeftMouseUpAction='
	local PART_4 = '\n\n[Button'
	local PART_5 = 'Str]\nMeter=String\nText='
	local PART_6 = '\nX=#X'
	local PART_7 = '# + 25 - ([Button'
	local PART_8 = 'Str:W] / 2)\nY=#YSTART# + 25 - ([Button'
	local PART_9 = 'Str:H] / 2)\nFontColor=#SecondaryColor#\nFontSize=(#FontSize# + 11)\nFontFace=#FontFace#\nDynamicVariables=1'

	File:write(PART_0)

	for i = 65,90 do

		local row_char = string.char(i)

		local VAR_0 = row_char
		local VAR_1 = VAR_0

		File:write(PART_1 .. VAR_0 .. PART_2 .. VAR_1 .. PART_3)

		local j = 0
		local counter_Y = 0
		for k,v in spairs(matrix) do

			local currLetter = string.upper(string.sub(k, 1, 1))
			if j == 0 then

				lastLetter = currLetter

			else

				if lastLetter == currLetter then

					counter_Y = counter_Y + 1

				else

					lastLetter = currLetter
					counter_Y = 0

				end

			end

			local VAR_2 = ''
			if string.upper(string.sub(k, 1, 1)) == row_char then

				VAR_2 = '[!ToggleMeter ' .. string.upper(string.sub(k, 1, 1)) .. tostring(counter_Y) .. ']'

			else

				VAR_2 = '[!HideMeter ' .. string.upper(string.sub(k, 1, 1)) .. tostring(counter_Y) .. ']'

			end

			File:write(VAR_2)

			j = j + 1

		end

		local VAR_3 = VAR_0
		local VAR_4 = VAR_0
		local VAR_5 = VAR_0
		local VAR_6 = VAR_0
		local VAR_7 = VAR_0

		File:write(PART_4 .. VAR_3 .. PART_5 .. VAR_4 .. PART_6 .. VAR_5 .. PART_7 .. VAR_6 .. PART_8 .. VAR_7 .. PART_9)
		File:write('\n')

	end

	File:close()

end

variables = function(matrix)

	local FilePath = SKIN:GetVariable("@") .. '\\Variables.inc'
	local File = io.open(FilePath, 'r')

	if not File then
		print('ReadFile: unable to open file at ' .. FilePath)
		return
	end

	File:seek("set", 23)
	local mode = File:read()

	File:close()

	local i = 0
	local maxList = {0}
	local lastLetter = ''
	for k,v in spairs(matrix) do

		local currLetter = string.upper(string.sub(k, 1, 1))

		if i == 0 then
		
			lastLetter = currLetter

		end

		if lastLetter == currLetter then

			local temp = maxList[#maxList] + 1
			table.remove(maxList, #maxList)
			table.insert(maxList, temp)

		else

			table.insert(maxList, 1)

		end

		i = i + 1
		lastLetter = currLetter

	end

	table.sort(maxList, compare)
	max = maxList[#maxList]

	local FilePath = SKIN:GetVariable("@") .. '\\Variables.inc'
	local File = io.open(FilePath, 'w')

	if not File then
		print('ReadFile: unable to open file at ' .. FilePath)
		return
	end

	local PART_0 = ''
	if mode == '0,0,0' then
		PART_0 = '[Variables]\nMainColor=0,0,0\nSecondaryColor=255,255,255\nXSTART=(#SCREENAREAWIDTH# / 2 - 675)\nYSTART=(#SCREENAREAHEIGHT# - 90)\nXA=(#XSTART# + (50 * 0))\nXB=(#XSTART# + (50 * 1))\nXC=(#XSTART# + (50 * 2))\nXD=(#XSTART# + (50 * 3))\nXE=(#XSTART# + (50 * 4))\nXF=(#XSTART# + (50 * 5))\nXG=(#XSTART# + (50 * 6))\nXH=(#XSTART# + (50 * 7))\nXI=(#XSTART# + (50 * 8))\nXJ=(#XSTART# + (50 * 9))\nXK=(#XSTART# + (50 * 10))\nXL=(#XSTART# + (50 * 11))\nXM=(#XSTART# + (50 * 12))\nXN=(#XSTART# + (50 * 13))\nXO=(#XSTART# + (50 * 14))\nXP=(#XSTART# + (50 * 15))\nXQ=(#XSTART# + (50 * 16))\nXR=(#XSTART# + (50 * 17))\nXS=(#XSTART# + (50 * 18))\nXT=(#XSTART# + (50 * 19))\nXU=(#XSTART# + (50 * 20))\nXV=(#XSTART# + (50 * 21))\nXW=(#XSTART# + (50 * 22))\nXX=(#XSTART# + (50 * 23))\nXY=(#XSTART# + (50 * 24))\nXZ=(#XSTART# + (50 * 25))\nXTRA=(#XSTART# + (50 * 26))\nYBASE=(#YSTART# - 28)'
	else
		PART_0 = '[Variables]\nMainColor=255,255,255\nSecondaryColor=0,0,0\nXSTART=(#SCREENAREAWIDTH# / 2 - 675)\nYSTART=(#SCREENAREAHEIGHT# - 90)\nXA=(#XSTART# + (50 * 0))\nXB=(#XSTART# + (50 * 1))\nXC=(#XSTART# + (50 * 2))\nXD=(#XSTART# + (50 * 3))\nXE=(#XSTART# + (50 * 4))\nXF=(#XSTART# + (50 * 5))\nXG=(#XSTART# + (50 * 6))\nXH=(#XSTART# + (50 * 7))\nXI=(#XSTART# + (50 * 8))\nXJ=(#XSTART# + (50 * 9))\nXK=(#XSTART# + (50 * 10))\nXL=(#XSTART# + (50 * 11))\nXM=(#XSTART# + (50 * 12))\nXN=(#XSTART# + (50 * 13))\nXO=(#XSTART# + (50 * 14))\nXP=(#XSTART# + (50 * 15))\nXQ=(#XSTART# + (50 * 16))\nXR=(#XSTART# + (50 * 17))\nXS=(#XSTART# + (50 * 18))\nXT=(#XSTART# + (50 * 19))\nXU=(#XSTART# + (50 * 20))\nXV=(#XSTART# + (50 * 21))\nXW=(#XSTART# + (50 * 22))\nXX=(#XSTART# + (50 * 23))\nXY=(#XSTART# + (50 * 24))\nXZ=(#XSTART# + (50 * 25))\nXTRA=(#XSTART# + (50 * 26))\nYBASE=(#YSTART# - 28)'
	end

	local PART_1 = '\nY'
	local PART_2 = '=(#YBASE# - (25 * '
	local PART_3 = '))'

	File:write(PART_0)

	for i = 0, (max - 1) do

		local VAR_0 = tostring(i)
		local VAR_1 = VAR_0

		File:write(PART_1 .. VAR_0 .. PART_2 .. VAR_1 .. PART_3)
	end

	File:close()

end

spairs = function(t)

    local keys = {}

    for k in pairs(t) do
    	keys[#keys+1] = k
    end

    table.sort(keys, compare)

    local i = 0

    return function()
        i = i + 1
        if keys[i] then

            return keys[i], t[keys[i]]

        end
    end

end

compare = function(a, b)

	a = string.upper(a)
	b = string.upper(b)

    return a < b
end
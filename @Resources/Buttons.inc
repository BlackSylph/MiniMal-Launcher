[ExtraButton]
Meter=Shape
Shape=Path drawTriangle | Fill Color #MainColor# | StrokeWidth 1 | Stroke Color #MainColor#
drawTriangle=(#XTRA# - 1), (#YSTART#) | LineTo (#XTRA# + (#ButtonSize#)), #YSTART# | LineTo (#XTRA# - 1), (#YSTART# + #ButtonSize#) | ClosePath 1
LeftMouseUpAction=[!ToggleConfig "MiniMal\Settings" "Settings.ini"]

[ButtonA]
Meter=Shape
Shape=Rectangle #XA#,(#YSTART#),#ButtonSize#,#ButtonSize# | StrokeWidth 1 | Stroke Color #MainColor# | Fill Color #MainColor#
LeftMouseUpAction=

[ButtonAStr]
Meter=String
Text=A
X=#XA# + (#ButtonSize# / 2) - ([ButtonAStr:W] / 2)
Y=#YSTART# + (#ButtonSize# / 2) - ([ButtonAStr:H] / 2)
FontColor=#SecondaryColor#
FontSize=(#FontSize# + 11)
FontFace=#FontFace#
DynamicVariables=1

[ButtonB]
Meter=Shape
Shape=Rectangle #XB#,(#YSTART#),#ButtonSize#,#ButtonSize# | StrokeWidth 1 | Stroke Color #MainColor# | Fill Color #MainColor#
LeftMouseUpAction=

[ButtonBStr]
Meter=String
Text=B
X=#XB# + (#ButtonSize# / 2) - ([ButtonBStr:W] / 2)
Y=#YSTART# + (#ButtonSize# / 2) - ([ButtonBStr:H] / 2)
FontColor=#SecondaryColor#
FontSize=(#FontSize# + 11)
FontFace=#FontFace#
DynamicVariables=1

[ButtonC]
Meter=Shape
Shape=Rectangle #XC#,(#YSTART#),#ButtonSize#,#ButtonSize# | StrokeWidth 1 | Stroke Color #MainColor# | Fill Color #MainColor#
LeftMouseUpAction=

[ButtonCStr]
Meter=String
Text=C
X=#XC# + (#ButtonSize# / 2) - ([ButtonCStr:W] / 2)
Y=#YSTART# + (#ButtonSize# / 2) - ([ButtonCStr:H] / 2)
FontColor=#SecondaryColor#
FontSize=(#FontSize# + 11)
FontFace=#FontFace#
DynamicVariables=1

[ButtonD]
Meter=Shape
Shape=Rectangle #XD#,(#YSTART#),#ButtonSize#,#ButtonSize# | StrokeWidth 1 | Stroke Color #MainColor# | Fill Color #MainColor#
LeftMouseUpAction=

[ButtonDStr]
Meter=String
Text=D
X=#XD# + (#ButtonSize# / 2) - ([ButtonDStr:W] / 2)
Y=#YSTART# + (#ButtonSize# / 2) - ([ButtonDStr:H] / 2)
FontColor=#SecondaryColor#
FontSize=(#FontSize# + 11)
FontFace=#FontFace#
DynamicVariables=1

[ButtonE]
Meter=Shape
Shape=Rectangle #XE#,(#YSTART#),#ButtonSize#,#ButtonSize# | StrokeWidth 1 | Stroke Color #MainColor# | Fill Color #MainColor#
LeftMouseUpAction=

[ButtonEStr]
Meter=String
Text=E
X=#XE# + (#ButtonSize# / 2) - ([ButtonEStr:W] / 2)
Y=#YSTART# + (#ButtonSize# / 2) - ([ButtonEStr:H] / 2)
FontColor=#SecondaryColor#
FontSize=(#FontSize# + 11)
FontFace=#FontFace#
DynamicVariables=1

[ButtonF]
Meter=Shape
Shape=Rectangle #XF#,(#YSTART#),#ButtonSize#,#ButtonSize# | StrokeWidth 1 | Stroke Color #MainColor# | Fill Color #MainColor#
LeftMouseUpAction=

[ButtonFStr]
Meter=String
Text=F
X=#XF# + (#ButtonSize# / 2) - ([ButtonFStr:W] / 2)
Y=#YSTART# + (#ButtonSize# / 2) - ([ButtonFStr:H] / 2)
FontColor=#SecondaryColor#
FontSize=(#FontSize# + 11)
FontFace=#FontFace#
DynamicVariables=1

[ButtonG]
Meter=Shape
Shape=Rectangle #XG#,(#YSTART#),#ButtonSize#,#ButtonSize# | StrokeWidth 1 | Stroke Color #MainColor# | Fill Color #MainColor#
LeftMouseUpAction=

[ButtonGStr]
Meter=String
Text=G
X=#XG# + (#ButtonSize# / 2) - ([ButtonGStr:W] / 2)
Y=#YSTART# + (#ButtonSize# / 2) - ([ButtonGStr:H] / 2)
FontColor=#SecondaryColor#
FontSize=(#FontSize# + 11)
FontFace=#FontFace#
DynamicVariables=1

[ButtonH]
Meter=Shape
Shape=Rectangle #XH#,(#YSTART#),#ButtonSize#,#ButtonSize# | StrokeWidth 1 | Stroke Color #MainColor# | Fill Color #MainColor#
LeftMouseUpAction=

[ButtonHStr]
Meter=String
Text=H
X=#XH# + (#ButtonSize# / 2) - ([ButtonHStr:W] / 2)
Y=#YSTART# + (#ButtonSize# / 2) - ([ButtonHStr:H] / 2)
FontColor=#SecondaryColor#
FontSize=(#FontSize# + 11)
FontFace=#FontFace#
DynamicVariables=1

[ButtonI]
Meter=Shape
Shape=Rectangle #XI#,(#YSTART#),#ButtonSize#,#ButtonSize# | StrokeWidth 1 | Stroke Color #MainColor# | Fill Color #MainColor#
LeftMouseUpAction=

[ButtonIStr]
Meter=String
Text=I
X=#XI# + (#ButtonSize# / 2) - ([ButtonIStr:W] / 2)
Y=#YSTART# + (#ButtonSize# / 2) - ([ButtonIStr:H] / 2)
FontColor=#SecondaryColor#
FontSize=(#FontSize# + 11)
FontFace=#FontFace#
DynamicVariables=1

[ButtonJ]
Meter=Shape
Shape=Rectangle #XJ#,(#YSTART#),#ButtonSize#,#ButtonSize# | StrokeWidth 1 | Stroke Color #MainColor# | Fill Color #MainColor#
LeftMouseUpAction=

[ButtonJStr]
Meter=String
Text=J
X=#XJ# + (#ButtonSize# / 2) - ([ButtonJStr:W] / 2)
Y=#YSTART# + (#ButtonSize# / 2) - ([ButtonJStr:H] / 2)
FontColor=#SecondaryColor#
FontSize=(#FontSize# + 11)
FontFace=#FontFace#
DynamicVariables=1

[ButtonK]
Meter=Shape
Shape=Rectangle #XK#,(#YSTART#),#ButtonSize#,#ButtonSize# | StrokeWidth 1 | Stroke Color #MainColor# | Fill Color #MainColor#
LeftMouseUpAction=

[ButtonKStr]
Meter=String
Text=K
X=#XK# + (#ButtonSize# / 2) - ([ButtonKStr:W] / 2)
Y=#YSTART# + (#ButtonSize# / 2) - ([ButtonKStr:H] / 2)
FontColor=#SecondaryColor#
FontSize=(#FontSize# + 11)
FontFace=#FontFace#
DynamicVariables=1

[ButtonL]
Meter=Shape
Shape=Rectangle #XL#,(#YSTART#),#ButtonSize#,#ButtonSize# | StrokeWidth 1 | Stroke Color #MainColor# | Fill Color #MainColor#
LeftMouseUpAction=

[ButtonLStr]
Meter=String
Text=L
X=#XL# + (#ButtonSize# / 2) - ([ButtonLStr:W] / 2)
Y=#YSTART# + (#ButtonSize# / 2) - ([ButtonLStr:H] / 2)
FontColor=#SecondaryColor#
FontSize=(#FontSize# + 11)
FontFace=#FontFace#
DynamicVariables=1

[ButtonM]
Meter=Shape
Shape=Rectangle #XM#,(#YSTART#),#ButtonSize#,#ButtonSize# | StrokeWidth 1 | Stroke Color #MainColor# | Fill Color #MainColor#
LeftMouseUpAction=

[ButtonMStr]
Meter=String
Text=M
X=#XM# + (#ButtonSize# / 2) - ([ButtonMStr:W] / 2)
Y=#YSTART# + (#ButtonSize# / 2) - ([ButtonMStr:H] / 2)
FontColor=#SecondaryColor#
FontSize=(#FontSize# + 11)
FontFace=#FontFace#
DynamicVariables=1

[ButtonN]
Meter=Shape
Shape=Rectangle #XN#,(#YSTART#),#ButtonSize#,#ButtonSize# | StrokeWidth 1 | Stroke Color #MainColor# | Fill Color #MainColor#
LeftMouseUpAction=

[ButtonNStr]
Meter=String
Text=N
X=#XN# + (#ButtonSize# / 2) - ([ButtonNStr:W] / 2)
Y=#YSTART# + (#ButtonSize# / 2) - ([ButtonNStr:H] / 2)
FontColor=#SecondaryColor#
FontSize=(#FontSize# + 11)
FontFace=#FontFace#
DynamicVariables=1

[ButtonO]
Meter=Shape
Shape=Rectangle #XO#,(#YSTART#),#ButtonSize#,#ButtonSize# | StrokeWidth 1 | Stroke Color #MainColor# | Fill Color #MainColor#
LeftMouseUpAction=

[ButtonOStr]
Meter=String
Text=O
X=#XO# + (#ButtonSize# / 2) - ([ButtonOStr:W] / 2)
Y=#YSTART# + (#ButtonSize# / 2) - ([ButtonOStr:H] / 2)
FontColor=#SecondaryColor#
FontSize=(#FontSize# + 11)
FontFace=#FontFace#
DynamicVariables=1

[ButtonP]
Meter=Shape
Shape=Rectangle #XP#,(#YSTART#),#ButtonSize#,#ButtonSize# | StrokeWidth 1 | Stroke Color #MainColor# | Fill Color #MainColor#
LeftMouseUpAction=

[ButtonPStr]
Meter=String
Text=P
X=#XP# + (#ButtonSize# / 2) - ([ButtonPStr:W] / 2)
Y=#YSTART# + (#ButtonSize# / 2) - ([ButtonPStr:H] / 2)
FontColor=#SecondaryColor#
FontSize=(#FontSize# + 11)
FontFace=#FontFace#
DynamicVariables=1

[ButtonQ]
Meter=Shape
Shape=Rectangle #XQ#,(#YSTART#),#ButtonSize#,#ButtonSize# | StrokeWidth 1 | Stroke Color #MainColor# | Fill Color #MainColor#
LeftMouseUpAction=

[ButtonQStr]
Meter=String
Text=Q
X=#XQ# + (#ButtonSize# / 2) - ([ButtonQStr:W] / 2)
Y=#YSTART# + (#ButtonSize# / 2) - ([ButtonQStr:H] / 2)
FontColor=#SecondaryColor#
FontSize=(#FontSize# + 11)
FontFace=#FontFace#
DynamicVariables=1

[ButtonR]
Meter=Shape
Shape=Rectangle #XR#,(#YSTART#),#ButtonSize#,#ButtonSize# | StrokeWidth 1 | Stroke Color #MainColor# | Fill Color #MainColor#
LeftMouseUpAction=

[ButtonRStr]
Meter=String
Text=R
X=#XR# + (#ButtonSize# / 2) - ([ButtonRStr:W] / 2)
Y=#YSTART# + (#ButtonSize# / 2) - ([ButtonRStr:H] / 2)
FontColor=#SecondaryColor#
FontSize=(#FontSize# + 11)
FontFace=#FontFace#
DynamicVariables=1

[ButtonS]
Meter=Shape
Shape=Rectangle #XS#,(#YSTART#),#ButtonSize#,#ButtonSize# | StrokeWidth 1 | Stroke Color #MainColor# | Fill Color #MainColor#
LeftMouseUpAction=

[ButtonSStr]
Meter=String
Text=S
X=#XS# + (#ButtonSize# / 2) - ([ButtonSStr:W] / 2)
Y=#YSTART# + (#ButtonSize# / 2) - ([ButtonSStr:H] / 2)
FontColor=#SecondaryColor#
FontSize=(#FontSize# + 11)
FontFace=#FontFace#
DynamicVariables=1

[ButtonT]
Meter=Shape
Shape=Rectangle #XT#,(#YSTART#),#ButtonSize#,#ButtonSize# | StrokeWidth 1 | Stroke Color #MainColor# | Fill Color #MainColor#
LeftMouseUpAction=

[ButtonTStr]
Meter=String
Text=T
X=#XT# + (#ButtonSize# / 2) - ([ButtonTStr:W] / 2)
Y=#YSTART# + (#ButtonSize# / 2) - ([ButtonTStr:H] / 2)
FontColor=#SecondaryColor#
FontSize=(#FontSize# + 11)
FontFace=#FontFace#
DynamicVariables=1

[ButtonU]
Meter=Shape
Shape=Rectangle #XU#,(#YSTART#),#ButtonSize#,#ButtonSize# | StrokeWidth 1 | Stroke Color #MainColor# | Fill Color #MainColor#
LeftMouseUpAction=

[ButtonUStr]
Meter=String
Text=U
X=#XU# + (#ButtonSize# / 2) - ([ButtonUStr:W] / 2)
Y=#YSTART# + (#ButtonSize# / 2) - ([ButtonUStr:H] / 2)
FontColor=#SecondaryColor#
FontSize=(#FontSize# + 11)
FontFace=#FontFace#
DynamicVariables=1

[ButtonV]
Meter=Shape
Shape=Rectangle #XV#,(#YSTART#),#ButtonSize#,#ButtonSize# | StrokeWidth 1 | Stroke Color #MainColor# | Fill Color #MainColor#
LeftMouseUpAction=

[ButtonVStr]
Meter=String
Text=V
X=#XV# + (#ButtonSize# / 2) - ([ButtonVStr:W] / 2)
Y=#YSTART# + (#ButtonSize# / 2) - ([ButtonVStr:H] / 2)
FontColor=#SecondaryColor#
FontSize=(#FontSize# + 11)
FontFace=#FontFace#
DynamicVariables=1

[ButtonW]
Meter=Shape
Shape=Rectangle #XW#,(#YSTART#),#ButtonSize#,#ButtonSize# | StrokeWidth 1 | Stroke Color #MainColor# | Fill Color #MainColor#
LeftMouseUpAction=

[ButtonWStr]
Meter=String
Text=W
X=#XW# + (#ButtonSize# / 2) - ([ButtonWStr:W] / 2)
Y=#YSTART# + (#ButtonSize# / 2) - ([ButtonWStr:H] / 2)
FontColor=#SecondaryColor#
FontSize=(#FontSize# + 11)
FontFace=#FontFace#
DynamicVariables=1

[ButtonX]
Meter=Shape
Shape=Rectangle #XX#,(#YSTART#),#ButtonSize#,#ButtonSize# | StrokeWidth 1 | Stroke Color #MainColor# | Fill Color #MainColor#
LeftMouseUpAction=

[ButtonXStr]
Meter=String
Text=X
X=#XX# + (#ButtonSize# / 2) - ([ButtonXStr:W] / 2)
Y=#YSTART# + (#ButtonSize# / 2) - ([ButtonXStr:H] / 2)
FontColor=#SecondaryColor#
FontSize=(#FontSize# + 11)
FontFace=#FontFace#
DynamicVariables=1

[ButtonY]
Meter=Shape
Shape=Rectangle #XY#,(#YSTART#),#ButtonSize#,#ButtonSize# | StrokeWidth 1 | Stroke Color #MainColor# | Fill Color #MainColor#
LeftMouseUpAction=

[ButtonYStr]
Meter=String
Text=Y
X=#XY# + (#ButtonSize# / 2) - ([ButtonYStr:W] / 2)
Y=#YSTART# + (#ButtonSize# / 2) - ([ButtonYStr:H] / 2)
FontColor=#SecondaryColor#
FontSize=(#FontSize# + 11)
FontFace=#FontFace#
DynamicVariables=1

[ButtonZ]
Meter=Shape
Shape=Rectangle #XZ#,(#YSTART#),#ButtonSize#,#ButtonSize# | StrokeWidth 1 | Stroke Color #MainColor# | Fill Color #MainColor#
LeftMouseUpAction=

[ButtonZStr]
Meter=String
Text=Z
X=#XZ# + (#ButtonSize# / 2) - ([ButtonZStr:W] / 2)
Y=#YSTART# + (#ButtonSize# / 2) - ([ButtonZStr:H] / 2)
FontColor=#SecondaryColor#
FontSize=(#FontSize# + 11)
FontFace=#FontFace#
DynamicVariables=1

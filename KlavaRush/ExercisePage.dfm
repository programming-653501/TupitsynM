object ExerciseForm: TExerciseForm
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = #1059#1087#1088#1072#1078#1085#1077#1085#1080#1077
  ClientHeight = 696
  ClientWidth = 1045
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnClose = FormClose
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object MistakesLabel: TLabel
    Left = 850
    Top = 11
    Width = 134
    Height = 19
    Caption = #1054#1096#1080#1073#1086#1082' '#1089#1076#1077#1083#1072#1085#1086': '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object AmountOfMistakesLabel: TLabel
    Left = 994
    Top = 11
    Width = 9
    Height = 19
    Caption = '0'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object EnterEdit: TEdit
    Left = 8
    Top = 351
    Width = 1029
    Height = 32
    Cursor = crIBeam
    AutoSelect = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    Text = ' '
    OnKeyPress = EnterEditKeyPress
  end
  object Panel: TPanel
    Left = 8
    Top = 389
    Width = 65
    Height = 65
    Caption = #1025
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object Panel1: TPanel
    Left = 88
    Top = 389
    Width = 65
    Height = 65
    Caption = '1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
  end
  object Panel2: TPanel
    Left = 168
    Top = 389
    Width = 65
    Height = 65
    Caption = '2'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
  end
  object Panel3: TPanel
    Left = 248
    Top = 389
    Width = 65
    Height = 65
    Caption = '3'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
  end
  object Panel4: TPanel
    Left = 328
    Top = 389
    Width = 65
    Height = 65
    Caption = '4'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
  end
  object Panel5: TPanel
    Left = 408
    Top = 389
    Width = 65
    Height = 65
    Caption = '5'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 6
  end
  object Panel6: TPanel
    Left = 488
    Top = 389
    Width = 65
    Height = 65
    Caption = '6'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
  end
  object Panel7: TPanel
    Left = 568
    Top = 389
    Width = 65
    Height = 65
    Caption = '7'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 8
  end
  object Panel8: TPanel
    Left = 647
    Top = 389
    Width = 65
    Height = 65
    Caption = '8'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 9
  end
  object Panel9: TPanel
    Left = 728
    Top = 389
    Width = 65
    Height = 65
    Caption = '9'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 10
  end
  object Panel0: TPanel
    Left = 808
    Top = 389
    Width = 65
    Height = 65
    Caption = '0'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 11
  end
  object PanelMinus: TPanel
    Left = 890
    Top = 389
    Width = 65
    Height = 65
    Caption = '-_'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 12
  end
  object PanelEqual: TPanel
    Left = 972
    Top = 389
    Width = 65
    Height = 65
    Caption = '=+'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 13
  end
  object PanelQ: TPanel
    Left = 8
    Top = 469
    Width = 65
    Height = 65
    Caption = #1049
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 14
  end
  object PanelW: TPanel
    Left = 88
    Top = 469
    Width = 65
    Height = 65
    Caption = #1062
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 15
  end
  object PanelE: TPanel
    Left = 168
    Top = 469
    Width = 65
    Height = 65
    Caption = #1059
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 16
  end
  object PanelR: TPanel
    Left = 248
    Top = 469
    Width = 65
    Height = 65
    Caption = #1050
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 17
  end
  object PanelT: TPanel
    Left = 328
    Top = 469
    Width = 65
    Height = 65
    Caption = #1045
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 18
  end
  object PanelY: TPanel
    Left = 408
    Top = 469
    Width = 65
    Height = 65
    Caption = #1053
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 19
  end
  object PanelU: TPanel
    Left = 488
    Top = 469
    Width = 65
    Height = 65
    Caption = #1043
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 20
  end
  object PanelI: TPanel
    Left = 568
    Top = 469
    Width = 65
    Height = 65
    Caption = #1064
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 21
  end
  object PanelO: TPanel
    Left = 647
    Top = 469
    Width = 65
    Height = 65
    Caption = #1065
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 22
  end
  object PanelP: TPanel
    Left = 728
    Top = 469
    Width = 65
    Height = 65
    Caption = #1047
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 23
  end
  object PanelCh1: TPanel
    Left = 808
    Top = 469
    Width = 65
    Height = 65
    Caption = #1061
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 24
  end
  object PanelCh2: TPanel
    Left = 890
    Top = 469
    Width = 65
    Height = 65
    Caption = #1066
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 25
  end
  object PanelCh3: TPanel
    Left = 972
    Top = 469
    Width = 65
    Height = 65
    Caption = '\/'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 26
  end
  object PanelA: TPanel
    Left = 8
    Top = 549
    Width = 65
    Height = 65
    Caption = #1060
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 27
  end
  object PanelS: TPanel
    Left = 88
    Top = 549
    Width = 65
    Height = 65
    Caption = #1067
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 28
  end
  object PanelD: TPanel
    Left = 168
    Top = 549
    Width = 65
    Height = 65
    Caption = #1042
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 29
  end
  object PanelF: TPanel
    Left = 248
    Top = 549
    Width = 65
    Height = 65
    Caption = #1040
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 30
  end
  object PanelG: TPanel
    Left = 328
    Top = 549
    Width = 65
    Height = 65
    Caption = #1055
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 31
  end
  object PanelH: TPanel
    Left = 408
    Top = 549
    Width = 65
    Height = 65
    Caption = #1056
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 32
  end
  object PanelJ: TPanel
    Left = 488
    Top = 549
    Width = 65
    Height = 65
    Caption = #1054
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 33
  end
  object PanelK: TPanel
    Left = 568
    Top = 549
    Width = 65
    Height = 65
    Caption = #1051
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 34
  end
  object PanelL: TPanel
    Left = 647
    Top = 549
    Width = 65
    Height = 65
    Caption = #1044
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 35
  end
  object PanelCh4: TPanel
    Left = 728
    Top = 549
    Width = 65
    Height = 65
    Caption = #1046
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 36
  end
  object PanelCh5: TPanel
    Left = 808
    Top = 549
    Width = 65
    Height = 65
    Caption = #1069
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 37
  end
  object PanelCh6: TPanel
    Left = 890
    Top = 549
    Width = 147
    Height = 65
    Caption = 'Enter'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 38
  end
  object PanelZ: TPanel
    Left = 88
    Top = 620
    Width = 65
    Height = 65
    Caption = #1071
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 39
  end
  object PanelX: TPanel
    Left = 168
    Top = 620
    Width = 65
    Height = 65
    Caption = #1063
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 40
  end
  object PanelC: TPanel
    Left = 248
    Top = 620
    Width = 65
    Height = 65
    Caption = #1057
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 41
  end
  object PanelV: TPanel
    Left = 328
    Top = 620
    Width = 65
    Height = 65
    Caption = #1052
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 42
  end
  object PanelB: TPanel
    Left = 408
    Top = 620
    Width = 65
    Height = 65
    Caption = #1048
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 43
  end
  object PanelN: TPanel
    Left = 488
    Top = 620
    Width = 65
    Height = 65
    Caption = #1058
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 44
  end
  object PanelM: TPanel
    Left = 568
    Top = 620
    Width = 65
    Height = 65
    Caption = #1068
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 45
  end
  object PanelCh7: TPanel
    Left = 648
    Top = 620
    Width = 65
    Height = 65
    Caption = #1041
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 46
  end
  object PanelCh8: TPanel
    Left = 728
    Top = 620
    Width = 65
    Height = 65
    Caption = #1070
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 47
  end
  object PanelCh9: TPanel
    Left = 808
    Top = 620
    Width = 65
    Height = 65
    Caption = '.,'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 48
  end
  object RichEdit: TRichEdit
    Left = 8
    Top = 36
    Width = 1029
    Height = 309
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ReadOnly = True
    ScrollBars = ssVertical
    TabOrder = 49
    WordWrap = False
  end
end

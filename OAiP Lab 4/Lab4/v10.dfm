object MainForm: TMainForm
  Left = 0
  Top = 0
  Caption = #1054#1073#1088#1072#1090#1072#1103' '#1087#1086#1083#1100#1089#1082#1072#1103' '#1079#1072#1087#1080#1089#1100
  ClientHeight = 583
  ClientWidth = 601
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = 15
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 15
  object InputExpressionLabel: TLabel
    Left = 56
    Top = 40
    Width = 157
    Height = 20
    Alignment = taCenter
    Caption = #1048#1089#1093#1086#1076#1085#1086#1077' '#1074#1099#1088#1072#1078#1077#1085#1080#1077
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = 20
    Font.Name = 'Default'
    Font.Style = []
    ParentFont = False
  end
  object PostfixFormLabel: TLabel
    Left = 376
    Top = 40
    Width = 149
    Height = 20
    Alignment = taCenter
    Caption = #1055#1086#1089#1090#1092#1080#1082#1089#1085#1072#1103' '#1092#1086#1088#1084#1072
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = 20
    Font.Name = 'Default'
    Font.Style = []
    ParentFont = False
  end
  object InputLabel: TLabel
    Left = 192
    Top = 144
    Width = 231
    Height = 20
    Alignment = taCenter
    Caption = #1042#1074#1077#1076#1080#1090#1077' '#1079#1085#1072#1095#1077#1085#1080#1077' '#1087#1077#1088#1077#1084#1077#1085#1085#1099#1093':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = 20
    Font.Name = 'Default'
    Font.Style = []
    ParentFont = False
  end
  object ResultInLabel: TLabel
    Left = 192
    Top = 384
    Width = 196
    Height = 20
    Caption = #1056#1077#1079#1091#1083#1100#1090#1072#1090#1099' '#1074#1099#1095#1080#1089#1083#1077#1085#1080#1081' '#1074':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = 20
    Font.Name = 'Default'
    Font.Style = []
    ParentFont = False
  end
  object InfFormLabel: TLabel
    Left = 56
    Top = 432
    Width = 142
    Height = 20
    Caption = #1048#1085#1092#1080#1082#1089#1085#1086#1081' '#1092#1086#1088#1084#1077':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = 20
    Font.Name = 'Default'
    Font.Style = []
    ParentFont = False
  end
  object PostfFormLabel: TLabel
    Left = 376
    Top = 432
    Width = 157
    Height = 20
    Caption = #1055#1086#1089#1090#1092#1080#1082#1089#1085#1086#1081' '#1092#1086#1088#1084#1077':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = 20
    Font.Name = 'Default'
    Font.Style = []
    ParentFont = False
  end
  object InputExpressionPanel: TPanel
    Left = 24
    Top = 80
    Width = 225
    Height = 41
    BevelKind = bkTile
    Caption = 'a * (b + c) / (d - e)'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = 20
    Font.Name = 'Default'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 5
  end
  object PostfixFormPanel: TPanel
    Left = 344
    Top = 80
    Width = 225
    Height = 41
    BevelKind = bkTile
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = 20
    Font.Name = 'Default'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 6
  end
  object AEdit: TEdit
    Left = 56
    Top = 192
    Width = 165
    Height = 23
    Cursor = crIBeam
    Alignment = taCenter
    BevelInner = bvLowered
    BevelKind = bkSoft
    NumbersOnly = True
    TabOrder = 0
    Text = 'a'
    OnClick = AEditClick
  end
  object DEdit: TEdit
    Left = 376
    Top = 192
    Width = 165
    Height = 23
    Cursor = crIBeam
    Alignment = taCenter
    BevelInner = bvLowered
    BevelKind = bkSoft
    NumbersOnly = True
    TabOrder = 3
    Text = 'd'
    OnClick = DEditClick
  end
  object BEdit: TEdit
    Left = 56
    Top = 256
    Width = 165
    Height = 23
    Cursor = crIBeam
    Alignment = taCenter
    BevelInner = bvLowered
    BevelKind = bkSoft
    NumbersOnly = True
    TabOrder = 1
    Text = 'b'
    OnClick = BEditClick
  end
  object EEdit: TEdit
    Left = 376
    Top = 256
    Width = 165
    Height = 23
    Cursor = crIBeam
    Alignment = taCenter
    BevelInner = bvLowered
    BevelKind = bkSoft
    NumbersOnly = True
    TabOrder = 4
    Text = 'e'
    OnClick = EEditClick
  end
  object CEdit: TEdit
    Left = 56
    Top = 322
    Width = 165
    Height = 23
    Cursor = crIBeam
    Alignment = taCenter
    BevelInner = bvLowered
    BevelKind = bkSoft
    NumbersOnly = True
    TabOrder = 2
    Text = 'c'
    OnClick = CEditClick
  end
  object ResultInfFormPanel: TPanel
    Left = 24
    Top = 488
    Width = 225
    Height = 41
    BevelKind = bkTile
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = 20
    Font.Name = 'Default'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 7
  end
  object ResultPostfFormPanel: TPanel
    Left = 344
    Top = 488
    Width = 225
    Height = 41
    BevelKind = bkTile
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = 20
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 8
  end
  object CountButton: TButton
    Left = 384
    Top = 307
    Width = 149
    Height = 49
    Cursor = crHandPoint
    Caption = #1056#1072#1089#1089#1095#1080#1090#1072#1090#1100
    Default = True
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = 20
    Font.Name = 'Default'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 9
    OnClick = CountButtonClick
  end
end

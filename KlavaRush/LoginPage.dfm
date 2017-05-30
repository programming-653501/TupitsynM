object LoginForm: TLoginForm
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = #1042#1086#1081#1076#1080#1090#1077' '#1074' '#1089#1074#1086#1102' '#1091#1095#1077#1090#1085#1091#1102' '#1079#1072#1087#1080#1089#1100
  ClientHeight = 237
  ClientWidth = 460
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnClose = FormClose
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object RegisterLabel: TLabel
    Left = 56
    Top = 207
    Width = 346
    Height = 16
    Cursor = crHandPoint
    Caption = #1042#1099' '#1077#1097#1077' '#1085#1077' '#1079#1072#1088#1077#1075#1077#1089#1090#1088#1080#1088#1086#1074#1072#1085#1099' '#1074' KlavaRush? '#1053#1072#1078#1084#1080#1090#1077' '#1089#1102#1076#1072
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    OnClick = RegisterLabelClick
    OnMouseEnter = RegisterLabelMouseEnter
    OnMouseLeave = RegisterLabelMouseLeave
  end
  object NicknameLabel: TLabel
    Left = 24
    Top = 33
    Width = 30
    Height = 13
    Caption = #1051#1086#1075#1080#1085
  end
  object PasswordLabel: TLabel
    Left = 24
    Top = 95
    Width = 37
    Height = 13
    Caption = #1055#1072#1088#1086#1083#1100
  end
  object GroupBox1: TGroupBox
    Left = 11
    Top = 8
    Width = 441
    Height = 193
    Caption = #1042#1093#1086#1076
    TabOrder = 2
    object LoginButton: TButton
      Left = 13
      Top = 144
      Width = 84
      Height = 33
      Cursor = crHandPoint
      Caption = #1042#1086#1081#1090#1080
      Default = True
      TabOrder = 0
      OnClick = LoginButtonClick
    end
  end
  object NicknameEdit: TEdit
    Left = 24
    Top = 52
    Width = 409
    Height = 21
    Cursor = crIBeam
    TabOrder = 0
  end
  object PasswordEdit: TEdit
    Left = 24
    Top = 114
    Width = 409
    Height = 21
    Cursor = crIBeam
    PasswordChar = '*'
    TabOrder = 1
  end
end

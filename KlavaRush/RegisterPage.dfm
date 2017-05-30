object RegisterForm: TRegisterForm
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = #1047#1072#1088#1077#1075#1077#1089#1090#1088#1080#1088#1091#1081#1090#1077#1089#1100' '#1074' KlavaRush'
  ClientHeight = 315
  ClientWidth = 455
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object NameLabel: TLabel
    Left = 24
    Top = 32
    Width = 19
    Height = 13
    Caption = #1048#1084#1103
  end
  object NicknameLabel: TLabel
    Left = 24
    Top = 88
    Width = 30
    Height = 13
    Caption = #1051#1086#1075#1080#1085
  end
  object PasswordLabel1: TLabel
    Left = 24
    Top = 144
    Width = 37
    Height = 13
    Caption = #1055#1072#1088#1086#1083#1100
  end
  object PasswordLabel2: TLabel
    Left = 24
    Top = 200
    Width = 94
    Height = 13
    Caption = #1055#1086#1074#1090#1086#1088#1080#1090#1077' '#1087#1072#1088#1086#1083#1100
  end
  object GroupBox: TGroupBox
    Left = 8
    Top = 8
    Width = 439
    Height = 297
    Caption = #1056#1077#1075#1080#1089#1090#1088#1072#1094#1080#1103
    Ctl3D = True
    ParentCtl3D = False
    TabOrder = 0
  end
  object NameEdit: TEdit
    Left = 24
    Top = 51
    Width = 409
    Height = 21
    Cursor = crIBeam
    TabOrder = 1
  end
  object NicknameEdit: TEdit
    Left = 24
    Top = 107
    Width = 409
    Height = 21
    Cursor = crIBeam
    TabOrder = 2
  end
  object PasswordEdit1: TEdit
    Left = 24
    Top = 163
    Width = 409
    Height = 21
    Cursor = crIBeam
    PasswordChar = '*'
    TabOrder = 3
  end
  object PasswordEdit2: TEdit
    Left = 24
    Top = 219
    Width = 409
    Height = 21
    Cursor = crIBeam
    PasswordChar = '*'
    TabOrder = 4
  end
  object RegisterButton: TButton
    Left = 24
    Top = 256
    Width = 94
    Height = 33
    Cursor = crHandPoint
    Caption = #1056#1077#1075#1080#1089#1090#1088#1072#1094#1080#1103
    Default = True
    TabOrder = 5
    OnClick = RegisterButtonClick
  end
end

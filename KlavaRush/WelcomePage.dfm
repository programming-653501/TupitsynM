object WelcomeForm: TWelcomeForm
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = #1044#1086#1073#1088#1086' '#1087#1086#1078#1072#1083#1086#1074#1072#1090#1100' '#1074' KlavaRush!!!'
  ClientHeight = 655
  ClientWidth = 718
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clBlack
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 22
    Top = 48
    Width = 669
    Height = 47
    Caption = #1044#1086#1073#1088#1086' '#1087#1086#1078#1072#1083#1086#1074#1072#1090#1100' '#1074' KlavaRush!!!'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clLime
    Font.Height = -40
    Font.Name = 'Stencil'
    Font.Style = []
    ParentFont = False
  end
  object StartButton: TButton
    Left = 192
    Top = 304
    Width = 305
    Height = 65
    Cursor = crHandPoint
    Caption = #1053#1072#1095#1072#1090#1100' '#1090#1088#1077#1085#1080#1088#1086#1074#1082#1091
    Default = True
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -27
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    TabStop = False
    OnClick = StartButtonClick
  end
  object InfoButton: TButton
    Left = 192
    Top = 400
    Width = 305
    Height = 65
    Cursor = crHandPoint
    Caption = #1048#1085#1092#1086#1088#1084#1072#1094#1080#1103
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -27
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    TabStop = False
    OnClick = InfoButtonClick
  end
  object ExitButton: TButton
    Left = 192
    Top = 496
    Width = 305
    Height = 65
    Cursor = crHandPoint
    Cancel = True
    Caption = #1042#1099#1093#1086#1076
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -27
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    TabStop = False
    OnClick = ExitButtonClick
  end
end

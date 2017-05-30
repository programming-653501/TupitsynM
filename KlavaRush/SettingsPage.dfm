object SettingsForm: TSettingsForm
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = #1051#1080#1095#1085#1099#1077' '#1085#1072#1089#1090#1088#1086#1081#1082#1080
  ClientHeight = 146
  ClientWidth = 343
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
  object MusicCheckBox: TCheckBox
    Left = 243
    Top = 24
    Width = 97
    Height = 17
    Caption = #1052#1091#1079#1099#1082#1072
    TabOrder = 0
  end
  object RadioGroup: TRadioGroup
    Left = 8
    Top = 16
    Width = 185
    Height = 105
    Caption = #1042#1099#1073#1077#1088#1080#1090#1077' '#1088#1072#1089#1082#1083#1072#1076#1082#1091
    ItemIndex = 0
    Items.Strings = (
      'RUS'
      'ENG')
    TabOrder = 1
  end
  object DeleteButton: TButton
    Left = 216
    Top = 80
    Width = 119
    Height = 41
    Cursor = crHandPoint
    Caption = #1059#1076#1072#1083#1080#1090#1100' '#1087#1088#1086#1092#1080#1083#1100
    TabOrder = 2
    OnClick = DeleteButtonClick
  end
end

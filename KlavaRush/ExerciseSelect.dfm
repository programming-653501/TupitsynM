object ExerciseSelectForm: TExerciseSelectForm
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = #1042#1099#1073#1077#1088#1080#1090#1077' '#1091#1087#1088#1072#1078#1085#1077#1085#1080#1077
  ClientHeight = 240
  ClientWidth = 424
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
  object ExerciseSelectListBox: TListBox
    Left = 8
    Top = 8
    Width = 408
    Height = 169
    Cursor = crHandPoint
    ItemHeight = 13
    Items.Strings = (
      '1. '#1041#1091#1082#1074#1099' '#1089#1088#1077#1076#1085#1077#1075#1086' '#1088#1103#1076#1072
      '2. '#1057#1083#1086#1074#1072' '#1080#1079' '#1073#1091#1082#1074' '#1089#1088#1077#1076#1085#1077#1075#1086' '#1088#1103#1076#1072
      '3. '#1041#1091#1082#1074#1099' '#1074#1077#1088#1093#1085#1077#1075#1086' '#1088#1103#1076#1072
      '4. '#1041#1091#1082#1074#1086#1089#1086#1095#1077#1090#1072#1085#1080#1103' '#1080#1079' '#1073#1091#1082#1074' '#1074#1077#1088#1093#1085#1077#1075#1086' '#1080' '#1089#1088#1077#1076#1085#1077#1075#1086' '#1088#1103#1076#1086#1074
      '5. '#1057#1083#1086#1074#1072' '#1080#1079' '#1073#1091#1082#1074' '#1074#1077#1088#1093#1085#1077#1075#1086' '#1080' '#1089#1088#1077#1076#1085#1077#1075#1086' '#1088#1103#1076#1072
      '6. '#1041#1091#1082#1074#1099' '#1085#1080#1078#1085#1077#1075#1086' '#1088#1103#1076#1072
      '7. '#1041#1091#1082#1074#1086#1089#1086#1095#1077#1090#1072#1085#1080#1103' '#1080#1079' '#1073#1091#1082#1074' '#1074#1089#1077#1093' '#1088#1103#1076#1086#1074
      '8. '#1057#1083#1086#1074#1072' '#1080#1079' '#1074#1089#1077#1093' '#1073#1091#1082#1074
      '9. '#1044#1086#1073#1072#1074#1083#1103#1077#1084' '#1094#1080#1092#1088#1099
      '10. '#1044#1086#1073#1072#1074#1083#1103#1077#1084' '#1079#1085#1072#1082#1080' '#1087#1088#1077#1087#1080#1085#1072#1085#1080#1103
      '11. '#1057#1083#1091#1095#1072#1081#1085#1072#1103' '#1075#1077#1085#1077#1088#1072#1094#1080#1103' '#1073#1091#1082#1074' '#1080' '#1089#1080#1084#1074#1086#1083#1086#1074' '#1076#1083#1103' '#1088#1072#1079#1074#1080#1090#1080#1103' '#1089#1082#1086#1088#1086#1089#1090#1080
      '12. '#1060#1080#1085#1072#1083#1100#1085#1099#1081' '#1090#1077#1089#1090)
    TabOrder = 0
  end
  object StartExerciseButton: TButton
    Left = 8
    Top = 190
    Width = 185
    Height = 33
    Cursor = crHandPoint
    Caption = #1053#1072#1095#1072#1090#1100' '#1091#1087#1088#1072#1078#1085#1077#1085#1080#1077
    Default = True
    TabOrder = 1
    OnClick = StartExerciseButtonClick
  end
  object ReturnButton: TButton
    Left = 231
    Top = 190
    Width = 185
    Height = 33
    Cursor = crHandPoint
    Cancel = True
    Caption = #1053#1072#1079#1072#1076
    TabOrder = 2
    OnClick = ReturnButtonClick
  end
end
object Form1: TForm1
  Left = 189
  Top = 164
  Caption = 'Form1'
  ClientHeight = 680
  ClientWidth = 557
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -56
  Font.Name = 'Segoe UI'
  Font.Style = []
  Position = poDesigned
  TextHeight = 74
  object Display: TEdit
    Left = 8
    Top = 8
    Width = 541
    Height = 82
    Alignment = taRightJustify
    TabOrder = 0
    Text = '0'
  end
  object seven: TButton
    Left = 8
    Top = 232
    Width = 113
    Height = 89
    Caption = '7'
    TabOrder = 1
    OnClick = NumEvent
  end
  object eight: TButton
    Left = 153
    Top = 232
    Width = 113
    Height = 89
    Caption = '8'
    TabOrder = 2
    OnClick = NumEvent
  end
  object nine: TButton
    Left = 296
    Top = 232
    Width = 113
    Height = 89
    Caption = '9'
    TabOrder = 3
    OnClick = NumEvent
  end
  object times: TButton
    Left = 436
    Top = 232
    Width = 113
    Height = 89
    Caption = 'x'
    TabOrder = 4
    OnClick = OpsClick
  end
  object back: TButton
    Left = 8
    Top = 120
    Width = 113
    Height = 89
    Caption = #61653
    TabOrder = 5
    OnClick = backClick
  end
  object cee: TButton
    Left = 153
    Top = 120
    Width = 113
    Height = 89
    Caption = 'C'
    TabOrder = 6
    OnClick = ceeClick
  end
  object ce: TButton
    Left = 296
    Top = 116
    Width = 113
    Height = 89
    Caption = 'CE'
    TabOrder = 7
    OnClick = ceClick
  end
  object divide: TButton
    Left = 436
    Top = 116
    Width = 113
    Height = 89
    Caption = '/'
    TabOrder = 8
    OnClick = OpsClick
  end
  object four: TButton
    Left = 8
    Top = 344
    Width = 113
    Height = 89
    Caption = '4'
    TabOrder = 9
    OnClick = NumEvent
  end
  object five: TButton
    Left = 153
    Top = 344
    Width = 113
    Height = 89
    Caption = '5'
    TabOrder = 10
    OnClick = NumEvent
  end
  object six: TButton
    Left = 296
    Top = 344
    Width = 113
    Height = 89
    Caption = '6'
    TabOrder = 11
    OnClick = NumEvent
  end
  object minus: TButton
    Left = 436
    Top = 344
    Width = 113
    Height = 89
    Caption = '-'
    TabOrder = 12
    OnClick = OpsClick
  end
  object one: TButton
    Left = 8
    Top = 456
    Width = 113
    Height = 89
    Caption = '1'
    TabOrder = 13
    OnClick = NumEvent
  end
  object two: TButton
    Left = 153
    Top = 456
    Width = 113
    Height = 89
    Caption = '2'
    TabOrder = 14
    OnClick = NumEvent
  end
  object three: TButton
    Left = 296
    Top = 456
    Width = 113
    Height = 89
    Caption = '3'
    TabOrder = 15
    OnClick = NumEvent
  end
  object plus: TButton
    Left = 436
    Top = 456
    Width = 113
    Height = 89
    Caption = '+'
    TabOrder = 16
    OnClick = OpsClick
  end
  object zero: TButton
    Left = 8
    Top = 568
    Width = 113
    Height = 89
    Caption = '0'
    TabOrder = 17
    OnClick = NumEvent
  end
  object plusminus: TButton
    Left = 153
    Top = 568
    Width = 113
    Height = 89
    Caption = #177
    TabOrder = 18
    OnClick = plusminusClick
  end
  object dot: TButton
    Left = 296
    Top = 568
    Width = 113
    Height = 89
    Caption = '.'
    TabOrder = 19
    OnClick = dotClick
  end
  object equalsBtn1: TButton
    Left = 436
    Top = 568
    Width = 113
    Height = 89
    Caption = '='
    TabOrder = 20
    OnClick = equalsBtn1Click
  end
end

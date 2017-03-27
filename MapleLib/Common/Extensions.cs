﻿// Project: MapleRoot
// File: Extensions.cs
// Updated By: Jared
// 

using System;
using System.Drawing;
using System.Windows.Forms;
using MapleLib.Collections;
using MapleLib.Structs;
using Application = System.Windows.Application;

namespace MapleLib.Common
{
    public static class Extensions
    {
        public static void AppendText(this RichTextBox box, string text, Color color)
        {
            try {
                if (box.InvokeRequired) {
                    box.Invoke(new Action(() => {
                        box.SelectionStart = box.TextLength;
                        box.SelectionLength = 0;

                        box.SelectionColor = color;
                        box.AppendText(text);
                        box.SelectionColor = box.ForeColor;
                        box.ScrollToCaret();
                    }));
                }
                else {
                    box.SelectionStart = box.TextLength;
                    box.SelectionLength = 0;

                    box.SelectionColor = color;
                    box.AppendText(text);
                    box.SelectionColor = box.ForeColor;
                    box.ScrollToCaret();
                }
            }
            catch (Exception) {
                
            }
        }

        public static string TimeStamp(this DateTime dateTime)
        {
            return dateTime.ToString("T");
        }

        public static bool IsNullOrEmpty(this string str)
        {
            return string.IsNullOrEmpty(str);
        }
        
        public static void AddOnUI(this MapleDictionary collection, Title item)
        {
            var add = new Action(()=> collection.Add(item));
            Application.Current.Dispatcher.BeginInvoke(add);
        }
    }
}
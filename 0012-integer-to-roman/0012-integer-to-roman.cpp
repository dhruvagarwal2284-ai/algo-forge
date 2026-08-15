class Solution {
public:
    string intToRoman(int num) {
        string ans = "";

        // Thousands
        if (num / 1000 == 3) ans += "MMM";
        else if (num / 1000 == 2) ans += "MM";
        else if (num / 1000 == 1) ans += "M";

        num %= 1000;

        // Hundreds
        if (num / 100 == 9) ans += "CM";
        else if (num / 100 >= 5) {
            ans += "D";
            if (num / 100 == 6) ans += "C";
            else if (num / 100 == 7) ans += "CC";
            else if (num / 100 == 8) ans += "CCC";
        }
        else if (num / 100 == 4) ans += "CD";
        else if (num / 100 == 3) ans += "CCC";
        else if (num / 100 == 2) ans += "CC";
        else if (num / 100 == 1) ans += "C";

        num %= 100;

        // Tens
        if (num / 10 == 9) ans += "XC";
        else if (num / 10 >= 5) {
            ans += "L";
            if (num / 10 == 6) ans += "X";
            else if (num / 10 == 7) ans += "XX";
            else if (num / 10 == 8) ans += "XXX";
        }
        else if (num / 10 == 4) ans += "XL";
        else if (num / 10 == 3) ans += "XXX";
        else if (num / 10 == 2) ans += "XX";
        else if (num / 10 == 1) ans += "X";

        num %= 10;

        // Ones
        if (num == 9) ans += "IX";
        else if (num >= 5) {
            ans += "V";
            if (num == 6) ans += "I";
            else if (num == 7) ans += "II";
            else if (num == 8) ans += "III";
        }
        else if (num == 4) ans += "IV";
        else if (num == 3) ans += "III";
        else if (num == 2) ans += "II";
        else if (num == 1) ans += "I";

        return ans;
    }
};
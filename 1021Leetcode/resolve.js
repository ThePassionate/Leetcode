/**
 * @param {string} s
 * @return {string}
 */
var removeOuterParentheses = function(s) {
    var ret = "";
    for (var i = 0, pre = 0, j = 0; i < s.length; i++) {
        if (s[i] == '(') j++;
        else j--;
        if (j == 0) {
            ret += s.slice(pre + 1, i);
            pre = i + 1;
        }
    }
    return ret;
};

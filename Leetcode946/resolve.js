/**
 * @param {number[]} pushed
 * @param {number[]} popped
 * @return {boolean}
 */
var validateStackSequences = function(pushed, popped) {
    var stk = Array();
    for (var i = 0, j = 0; j < popped.length; j++) {
        while (i < pushed.length && (stk.length == 0 || stk[stk.length - 1] != popped[j])) {
            stk.push(pushed[i]);
            i++;
        }
        if (stk.pop() != popped[j]) return false;
    }
    return true;
};

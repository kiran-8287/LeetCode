class Solution {
public:
    string interpret(string command) {
        string goal = "";
        for (int i = 0; i < command.length(); i++) {
            if (command[i] == 'G') {
                goal += 'G';}
            else if (i <= command.length() - 1 && command[i] == '(' &&command[i + 1] == ')') {goal += 'o';}
            else if (command[i] == 'a' && command[i + 1] == 'l') {
                goal += "al";
            }
        }
        return goal;
    }

};
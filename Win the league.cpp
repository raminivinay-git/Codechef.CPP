string findLeagueWinner(int A, int M) {
    if (A > M) {
        return "TEAM A";
    } else if (M > A) {
        return "TEAM M";
    } else {
        return "DRAW";
    }
}

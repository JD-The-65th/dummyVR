namespace dummyVR {

    int location[2][2][2];
    void updateLoc(int x, int y, int z) {
    location[1][0][0] = x;
    location[0][1][0] = y;
    location[0][0][1] = y;

    }

}
// Length of arrays to interpolate
int lengthCheck(float x1, float x2, float y1, float y2)
{
    int length;
    int dxAbs, dx = x2 - x1;
    int dyAbs, dy = y2 - y1;

    // Poor man's absolute value
    if (dx < 0)
        dxAbs = dx * -1;
    else
        dxAbs = dx;
    if (dy < 0)
        dyAbs = dy * -1;
    else
        dyAbs = dy;

    if (dyAbs > dxAbs) {
        if (dy > 0)
            length = dy;
        if (dy < 0)
            length = dyAbs;
    }
    if ( dxAbs > dyAbs) {
        if (dx > 0)
            length = dx;
        if (dx < 0 )
            length = dxAbs;
    }
    if ( dxAbs == dyAbs )
        length = dxAbs;

    return length;
}

// First X-value for interp1() and direction, increments of 1 (because pixels)
float increments(float x1, float x2, float y1, float y2) {
    int inc;
    int dxAbs, dx = x2 - x1;
    int dyAbs, dy = y2 - y1;

    // Poor man's absolute value
    if (dx < 0)
        dxAbs = dx * -1;
    else
        dxAbs = dx;
    if (dy < 0)
        dyAbs = dy * -1;
    else
        dyAbs = dy;

    if (dyAbs > dxAbs) {
        if (dy > 0)
            inc = y1 + 1;
        if (dy < 0)
            inc = y1 - 1;
    }
    if ( dxAbs > dyAbs) {
        if (dx > 0)
            inc = x1 + 1;
        if (dx < 0 )
            inc = x1 - 1;
    }
    if ( dxAbs == dyAbs )
        if (x2 > x1)
            inc = x1 + 1;
        else if (x1 > x2)
            inc = x1 - 1;


    return inc;
}

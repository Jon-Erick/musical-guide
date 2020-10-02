#ifndef BERLINGO_H
#define BERLINGO_H

double berlingofart( int heimlengsel, int stigning, int kaffekopper, double& fart )
{
    fart= 45+1.5*heimlengsel*kaffekopper-0.65*stigning;
}
#endif // BERLINGO_H

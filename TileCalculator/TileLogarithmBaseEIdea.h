#ifndef TILELOGARITHMBASEEIDEA_H
#define TILELOGARITHMBASEEIDEA_H

#include "Calculator/LogarithmBaseEIdea.h"

struct TileLogarithmBaseEAttributes : public IdeaAttributes
{
    TileLogarithmBaseEAttributes();
};

class TileLogarithmBaseEIdea : public LogarithmBaseEIdea
{
    Q_OBJECT

public:
    explicit TileLogarithmBaseEIdea();
    const IdeaAttributes attributes() override;

    void resetDisplay() override;
};

#endif // NATURALLOGARITHMIDEA_H

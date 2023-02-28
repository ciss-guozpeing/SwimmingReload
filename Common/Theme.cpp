#include "Theme.h"

Theme::Theme(QObject *parent)
    : QObject{parent}
{

}

void Theme::configTheme()
{
    qApp->setStyle(QStyleFactory::create("Fusion"));

    // clang-format off
    QPalette palette;
    palette.setColor(QPalette::Base,            QColor("#21373f"));
    palette.setColor(QPalette::Link,            QColor("#409da0"));
    palette.setColor(QPalette::Button,          QColor("#21373f"));
    palette.setColor(QPalette::Window,          QColor("#21373f"));
    palette.setColor(QPalette::Text,            QColor("#ffffff"));
    palette.setColor(QPalette::Midlight,        QColor("#0e1419"));
    palette.setColor(QPalette::Highlight,       QColor("#409da0"));
    palette.setColor(QPalette::BrightText,      QColor("#ffffff"));
    palette.setColor(QPalette::ButtonText,      QColor("#ffffff"));
    palette.setColor(QPalette::WindowText,      QColor("#ffffff"));
    palette.setColor(QPalette::ToolTipBase,     QColor("#e6e0b2"));
    palette.setColor(QPalette::ToolTipText,     QColor("#e6e0b2"));
    palette.setColor(QPalette::HighlightedText, QColor("#e6e0b2"));
    qApp->setPalette(palette);
}

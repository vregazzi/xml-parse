#include <iostream>
#include "tinyxml2/tinyxml2.cpp"

void PrintTitles(std::string file)
{
    tinyxml2::XMLDocument doc;
    doc.LoadFile(file.c_str());

    tinyxml2::XMLElement *root = doc.RootElement();

    for (tinyxml2::XMLElement *child = root->FirstChildElement(); child != NULL; child = child->NextSiblingElement())
    {
        for (tinyxml2::XMLElement *title = child->FirstChildElement();
             title != NULL; title = title->NextSiblingElement())
        {
            if (title->Name() == std::string("title"))
            {

                std::cout << title->GetText() << '\n';
            }
        }
    }
    return;
}

int main()
{
    std::string fileName;
    std::cout << "Enter file name: ";
    std::cin >> fileName;

    PrintTitles(fileName);

    std::cout << "complete";
    return 0;
}
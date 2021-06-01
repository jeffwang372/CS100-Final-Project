#ifndef __PRINT_TEST__
#define __PRINT_TEST__

#include "gtest/gtest.h"
#include "printtaskstrat.hpp"
#include "printliststrat.hpp"
#include "menu.hpp"

// most tests for print were run on command line

TEST(PrintPriority, EmptyList) {
	ListsComposite* l = new ListsComposite("Title1", 0);
	std::stringstream out;
	l->printByPriority(out);
	EXPECT_EQ(out.str(),"No tasks left.\n");
}

TEST(PrintDate, EmptyList) {
        ListsComposite* l = new ListsComposite("Title1", 0);
        std::stringstream out;
        l->printByPriority(out);
        EXPECT_EQ(out.str(),"No tasks left.\n");
}

TEST(PrintDuration, EmptyList) {
        ListsComposite* l = new ListsComposite("Title1", 0);
        std::stringstream out;
        l->printByPriority(out);
        EXPECT_EQ(out.str(),"No tasks left.\n");
}

TEST(PrintPriority, NoLists) {
	Menu* m = new Menu();
        std::stringstream out;
	m->printByPriority(out);
	EXPECT_EQ(out.str(), "No lists left.\n");
}

TEST(PrintDate, NoLists) {
        Menu* m = new Menu();
	std::stringstream out;
        m->printByDate(out);
        EXPECT_EQ(out.str(), "No lists left.\n");
}

TEST(PrintDuration, NoLists) {
        Menu* m = new Menu();
        std::stringstream out;
        m->printByDuration(out);
        EXPECT_EQ(out.str(), "No lists left.\n");
}
#endif


#pragma once

#include "planner/logical_operator.hpp"

namespace duckdb {

class LogicalDistinct : public LogicalOperator {
  public:
	LogicalDistinct() : LogicalOperator(LogicalOperatorType::DISTINCT) {}

	virtual void Accept(LogicalOperatorVisitor *v) override { v->Visit(*this); }
};
} // namespace duckdb
#include "GenericGraphRuntimePrivatePCH.h"
#include "GenericGraphNode.h"

#define LOCTEXT_NAMESPACE "GenericGraphNode"

UGenericGraphNode::UGenericGraphNode()
{

}

UGenericGraphNode::~UGenericGraphNode()
{

}

UGenericGraph* UGenericGraphNode::GetGraph()
{
	return Cast<UGenericGraph>(GetOuter());
}

#undef LOCTEXT_NAMESPACE
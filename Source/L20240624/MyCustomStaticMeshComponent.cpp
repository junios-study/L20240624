// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCustomStaticMeshComponent.h"

void UMyCustomStaticMeshComponent::BeginPlay()
{
	if (GetStaticMesh()->GetRenderData()->LODResources.Num() > 0)
	{
		FStaticMeshVertexBuffers& VertexBuffers = GetStaticMesh()->GetRenderData()->LODResources[0].VertexBuffers;
	
		int32 VertexCount = VertexBuffers.PositionVertexBuffer.GetNumVertices();
		for (int32 Index = 0; Index < VertexCount; Index++)
		{
			const FVector3f WorldSpaceVertexLocation = VertexBuffers.PositionVertexBuffer.
				VertexPosition(Index);

			UE_LOG(LogTemp, Warning, TEXT("%s"), *WorldSpaceVertexLocation.ToString());
		}

		FRawStaticIndexBuffer& IndexBuffers = GetStaticMesh()->GetRenderData()->LODResources[0].IndexBuffer;

		int32 IndexCount = IndexBuffers.GetNumIndices();

		for (int32 Index = 0; Index < IndexCount; Index++)
		{
			const uint32 IndexLocation = IndexBuffers.GetIndex(Index);

			UE_LOG(LogTemp, Warning, TEXT("%d"), IndexLocation);
		}
	}
}

/* A base level blueprint which return spawn location
   and triggers. All levels use this a base blueprint.
   */
#include "BaseLevel.h"

#include "Components/BoxComponent.h"

// Sets default values
ABaseLevel::ABaseLevel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseLevel::BeginPlay()
{
	Super::BeginPlay();

	if (Trigger != nullptr) {
		Trigger->bHiddenInGame = true;
	}
	
}

// Called every frame
void ABaseLevel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
/* Trigger to see if player has cleared the level and used to
   call the next level.
   */
UBoxComponent* ABaseLevel::GetTrigger()
{
	return Trigger;
}

UBoxComponent* ABaseLevel::GetSpwanLocation()
{
	return SpawnLocation;
}


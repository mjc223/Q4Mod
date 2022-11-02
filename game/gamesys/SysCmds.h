
#ifndef __SYS_CMDS_H__
#define __SYS_CMDS_H__

void D_DrawDebugLines( void );

void KillEntities( const idCmdArgs &args, const idTypeInfo &superClass );

void GiveStuffToPlayer( idPlayer* player, const char* name, const char* value );

void GrantArmorOnKill();

void BeginAssaultWave(const idCmdArgs& args);

void ReviewAssaultWave();

void SpawnEnemies(int phase);

void Cmd_EnemySpawn_f(int enemy);

int ReturnEnemyCount();

#endif /* !__SYS_CMDS_H__ */


/* ==== __break @ 004772db ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004772db-004772db
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



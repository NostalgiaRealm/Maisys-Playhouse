
/* ==== __break @ 004106db ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004106db-004106db
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




/* ==== __break @ 004110db ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004110db-004110db
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




/* ==== __break @ 004a0ebb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004a0ebb-004a0ebb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



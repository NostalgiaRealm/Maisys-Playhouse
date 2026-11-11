
/* ==== __break @ 004a1349 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004a1349-004a1349
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



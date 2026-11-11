
/* ==== __break @ 00472fed ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00472fed-00472fed
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



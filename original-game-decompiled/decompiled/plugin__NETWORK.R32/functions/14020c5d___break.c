
/* ==== __break @ 14020c5d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020c5d-14020c5d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




/* ==== __break @ 14020c7d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020c7d-14020c7d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



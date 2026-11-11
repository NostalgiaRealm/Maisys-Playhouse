
/* ==== __break @ 14020c7a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020c7a-14020c7a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



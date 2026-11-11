
/* ==== __break @ 14020c7f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020c7f-14020c7f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



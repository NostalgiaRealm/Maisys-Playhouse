
/* ==== __break @ 0045f4bf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f4bf-0045f4bf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



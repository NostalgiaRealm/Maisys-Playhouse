
/* ==== __break @ 00407716 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00407716-00407716
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



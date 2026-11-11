
/* ==== __break @ 0049f3da ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f3da-0049f3da
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



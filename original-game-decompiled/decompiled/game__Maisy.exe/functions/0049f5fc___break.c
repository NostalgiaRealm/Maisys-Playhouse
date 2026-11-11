
/* ==== __break @ 0049f5fc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f5fc-0049f5fc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



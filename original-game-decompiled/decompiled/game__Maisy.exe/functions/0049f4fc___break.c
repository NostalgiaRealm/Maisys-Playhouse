
/* ==== __break @ 0049f4fc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f4fc-0049f4fc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



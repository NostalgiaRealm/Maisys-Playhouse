
/* ==== __break @ 0049f304 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f304-0049f304
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



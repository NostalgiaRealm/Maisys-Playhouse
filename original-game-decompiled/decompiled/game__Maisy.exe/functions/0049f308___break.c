
/* ==== __break @ 0049f308 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f308-0049f308
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



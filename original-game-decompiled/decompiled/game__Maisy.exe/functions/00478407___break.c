
/* ==== __break @ 00478407 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00478407-00478407
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



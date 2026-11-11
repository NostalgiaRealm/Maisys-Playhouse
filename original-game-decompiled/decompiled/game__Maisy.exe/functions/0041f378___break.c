
/* ==== __break @ 0041f378 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041f378-0041f378
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



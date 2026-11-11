
/* ==== __break @ 0041f365 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041f365-0041f365
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



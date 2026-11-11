
/* ==== __break @ 0041f039 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041f039-0041f039
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



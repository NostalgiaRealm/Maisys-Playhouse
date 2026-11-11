
/* ==== __break @ 0041f367 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041f367-0041f367
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




/* ==== __break @ 0041ecbb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041ecbb-0041ecbb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



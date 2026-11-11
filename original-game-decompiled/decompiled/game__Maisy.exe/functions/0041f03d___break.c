
/* ==== __break @ 0041f03d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041f03d-0041f03d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



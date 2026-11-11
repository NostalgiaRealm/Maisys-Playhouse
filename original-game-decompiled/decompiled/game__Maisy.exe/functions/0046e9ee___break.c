
/* ==== __break @ 0046e9ee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046e9ee-0046e9ee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




/* ==== __break @ 004378ae ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004378ae-004378ae
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


